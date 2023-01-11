package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	var num, ans, score int
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < 10; i++ {
		num = rand.Intn(10)
		for j := 0; j < 10; j++ {
			if j == num {
				fmt.Printf("  #  ")
			} else {
				fmt.Printf("     ")
			}
		}
		fmt.Println("")
		for j := 0; j < 10; j++ {
			fmt.Printf(" --- ")
		}
		fmt.Println("")
		for j := 0; j < 10; j++ {
			fmt.Printf("  %d  ", j)
		}
		fmt.Println("")
		fmt.Scan(&ans)
		if ans == num {
			score += 10
		}
	}
	fmt.Printf("あなたの得点は%dです。\n", score)
}
