package main

import "fmt"

func main() {
	arr := []int{1, 2, 3, 4}
	var num int
	i := 0
	fmt.Scan(&num)
	arr = append(arr, num)
	for num != arr[i] {
		i += 1
	}
	if i == (len(arr) - 1) {
		fmt.Println("見つかりませんでした")
	} else {
		fmt.Printf("%dに見つかりました", i)
	}
}
