package main

import "fmt"

func main() {
	arr := []int{2, 4, 5, 10}
	var num int
	fmt.Scan(&num)
	index := sequential_search(num, arr)
	if index == -1 {
		fmt.Printf("%dは見つかりませんでした。\n", num)
	} else {
		fmt.Printf("%dは配列の%d番目のインデックスで見つかりました\n", num, index)
	}
}

func sequential_search(num int, arr []int) int {
	var index int
	for i := 0; i < len(arr); i++ {
		if arr[i] == num {
			index = i
			return index
		}
	}
	return -1
}
