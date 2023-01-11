package main

import "fmt"

func main() {
	arr := []int{1, 3, 7, 8, 10, 15, 21, 22, 24}
	var search_num, index int
	fmt.Scan(&search_num)
	index = binary_search(search_num, arr)
	if index == -1 {
		fmt.Printf("%dは見つかりませんでした\n", search_num)
	} else {
		fmt.Printf("%dは%dで見つかりました\n", search_num, index)
	}
}

func binary_search(num int, arr []int) int {
	left := 0
	right := len(arr) - 1
	var mid int
	for true {
		mid = (right + left) / 2
		if num == arr[mid] {
			return mid
		}
		if num < arr[mid] {
			right = mid - 1
		} else {
			left = mid + 1
		}
		if left > right {
			return -1
		}
	}
	return -1
}
