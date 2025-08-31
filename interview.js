function twoSumUnique(nums, target) {
  nums.sort((a, b) => a - b); 
  let left = 0, right = nums.length - 1;
  let result = [];

  while (left < right) {
    let sum = nums[left] + nums[right];

    if (sum === target) {
      result.push([nums[left], nums[right]]);
      left++;
      right--;
      while (nums[left] === nums[left - 1]) left++;   
      while (nums[right] === nums[right + 1]) right--;
    } else if (sum < target) {
      left++;
    } else {
      right--;
    }
  }
  return result;
}

console.log(twoSumUnique([2,7,11,15,-2,9], 9)); 

