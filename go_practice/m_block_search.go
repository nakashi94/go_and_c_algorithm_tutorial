package main

import "fmt"

func main() {
	var arr = []int{1, 3, 5, 6, 7, 9, 10, 11, 13, 16, 17, 18, 19, 24, 26, 27, 29, 30, 32, 35}
	var block_num, search_num, index int
	fmt.Scan(&block_num)
	fmt.Scan(&search_num)
	block_len := len(arr) / block_num
	for i := 0; i < block_num; i++ {
		if search_num <= arr[(block_len*i)+(block_len-1)] {
			// sequential search
			for j := (block_len * i); j < (block_len*i)+block_len; j++ {
				if search_num == arr[j] {
					index = j
					break
				} else {
					if j == (block_len*i)+block_len-1 {
						index = -1
						break
					}
					continue
				}
			}
			break
		} else {
			if i == (block_num - 1) {
				index = -1
				break
			}
			continue
		}
	}
	if index != -1 {
		fmt.Printf("%dは%dで見つかりました。\n", search_num, index)
	} else {
		fmt.Printf("%dは見つかりませんでした\n", search_num)
	}
}
