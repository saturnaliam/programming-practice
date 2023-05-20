const searchRange = function(nums, target) {
    let startEnd = [-1, -1];

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] > target) break;
        
        if (nums[i] == target) {
            if (startEnd[0] == -1) startEnd[0] = i;
            startEnd[1] = i;
        }
    }

    return startEnd;
};

console.log(searchRange([1,2,3,3,3,3,4,5,9], 3));