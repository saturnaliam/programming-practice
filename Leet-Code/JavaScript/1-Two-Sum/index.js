const twoSum = function(nums, target) {
    for (let i = 0; i < nums.length; i++) {
        for(let x = 0; x < nums.length; x++) {
            if (x === i) continue;
            if (nums[i] + nums[x] == target) return [i, x];
        } 
    }
};

console.log(twoSum([3, 5, 2, -4], 8));