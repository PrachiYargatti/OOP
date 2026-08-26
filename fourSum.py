class solution:
    def fourSum(self, arr, target):
        arr.sort()
        n = len(arr)
        quadruplets = []
    
        for i in range(n - 3):
            # Skip duplicates for the 1st element
            if i > 0 and arr[i] == arr[i - 1]:
                continue
    
            # Pruning 1: Smallest 4 elements are greater than target
            if arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] > target:
                break
            # Pruning 2: Current element + 3 largest elements are smaller than target
            if arr[i] + arr[n - 3] + arr[n - 2] + arr[n - 1] < target:
                continue
    
            for j in range(i + 1, n - 2):
                # Skip duplicates for the 2nd element
                if j > i + 1 and arr[j] == arr[j - 1]:
                    continue
    
                # Inner Pruning for 2nd element
                if arr[i] + arr[j] + arr[j + 1] + arr[j + 2] > target:
                    break
                if arr[i] + arr[j] + arr[n - 2] + arr[n - 1] < target:
                    continue
    
                # Two-Pointer Search
                k, l = j + 1, n - 1
                while k < l:
                    current_sum = arr[i] + arr[j] + arr[k] + arr[l]
    
                    if current_sum == target:
                        quadruplets.append([arr[i], arr[j], arr[k], arr[l]])
    
                        # Skip duplicates for 3rd and 4th elements
                        while k < l and arr[k] == arr[k + 1]:
                            k += 1
                        while k < l and arr[l] == arr[l - 1]:
                            l -= 1
    
                        k += 1
                        l -= 1
                    elif current_sum < target:
                        k += 1
                    else:
                        l -= 1
    
        return quadruplets
