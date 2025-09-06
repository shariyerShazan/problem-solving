// one
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




// two
function lengthOfLongestSubstring(s) {
    let set = new Set();
    let left = 0, maxLen = 0;
  
    for (let right = 0; right < s.length; right++) {
      while (set.has(s[right])) {
        set.delete(s[left]);
        left++;
      }
      set.add(s[right]);
      maxLen = Math.max(maxLen, right - left + 1);
    }
  
    return maxLen;
  }
  
  console.log(lengthOfLongestSubstring("abcabcbb")); 
  




//   three
function groupAnagrams(words) {
    let map = new Map();
  
    for (let word of words) {
      let key = word.split("").sort().join("");
      if (!map.has(key)) map.set(key, []);
      map.get(key).push(word);
    }
  
    return Array.from(map.values());
  }
  
  console.log(groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]));
  





//   four
function deepClone(obj) {
    if (obj === null || typeof obj !== "object") return obj;
  
    if (Array.isArray(obj)) {
      return obj.map(item => deepClone(item));
    }
  
    let clone = {};
    for (let key in obj) {
      clone[key] = deepClone(obj[key]);
    }
    return clone;
  }
  
  let obj = { a: 1, b: { c: 2, d: [3,4] } };
  let cloned = deepClone(obj);
  cloned.b.c = 99;
  console.log(obj.b.c);
  



//   five 
function flattenObject(obj, parentKey = "", result = {}) {
    for (let key in obj) {
      let newKey = parentKey ? `${parentKey}.${key}` : key;
      if (typeof obj[key] === "object" && !Array.isArray(obj[key])) {
        flattenObject(obj[key], newKey, result);
      } else {
        result[newKey] = obj[key];
      }
    }
    return result;
  }
  
  console.log(flattenObject({ a: { b: { c: 1 } }, d: 2 }));
  



// six

const aramstrongNumber = (num)=>{
  let numStr = num.toString().split("")
  let power = numStr.length 
  let sum = 0
  for(let i = 0 ; i < power ; i++){
       const digit = parseInt(numStr[i])
       sum = sum+ (digit** power)
  }
  console.log(sum)
  if(num == sum){
    console.log("it's a armstrong number");
  }else{
    console.log("not armstrong")
  }
}
aramstrongNumber(154)