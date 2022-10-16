const minDifficulty = (jobDifficulty, d) => {
  const LEN = jobDifficulty.length;
  if (LEN < d) return -1;

  const dp = new Uint16Array(LEN);
  dp[0] = jobDifficulty[0];
  for (let i = 1; i < LEN; ++i) {
    dp[i] = jobDifficulty[i] > dp[i - 1] ? jobDifficulty[i] : dp[i - 1];
  }

  for (let i = 1; i < d; ++i) {
    const stack = [];
    let old = dp[i - 1];
    for (let j = i; j < LEN; ++j) {
      let min = old;
      old = dp[j];
      while (stack.length && jobDifficulty[stack[stack.length - 1]] <= jobDifficulty[j]) {
        const top = stack.pop();
        min = Math.min(min, dp[top] - jobDifficulty[top]);
      }
      dp[j] = min + jobDifficulty[j];
      if (stack.length) {
        const top = dp[stack[stack.length - 1]];
        top < dp[j] && (dp[j] = top);
      }
      stack.push(j);
    }
  }

  return dp[LEN - 1];
};