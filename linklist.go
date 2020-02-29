package main

import "fmt"

type node struct {
	data int
	next *node
	prev *node
}
type ptrs struct {
	head *node
	tail *node
}

func insert(n int, obj *ptrs) {
	mynode := node{}
	mynode.data = n
	mynode.next = nil
	mynode.prev = nil
	if obj.head == nil {
		obj.head = &mynode
		obj.tail = &mynode
	} else {
		obj.tail.next = &mynode
		mynode.prev = obj.tail
		obj.tail = &mynode
	}

}
func display_front(obj *ptrs) {
	fmt.Println("From head to tail")
	for ptr := obj.head; ptr != nil; ptr = ptr.next {
		fmt.Print(ptr.data)
		fmt.Print(" ")
	}
	fmt.Println()
}

func display_back(obj *ptrs) {
	fmt.Println("From tail to head")
	for ptr := obj.tail; ptr != nil; ptr = ptr.prev {
		fmt.Print(ptr.data)
		fmt.Print(" ")
	}
	fmt.Println()
}

func main() {
	var num int
	var n int
	fmt.Println("How many numbers??-from go")
	fmt.Scanln(&num)
	obj := ptrs{nil, nil}
	for i := 0; i < num; i++ {
		fmt.Println("Enter number", i+1)
		fmt.Scanln(&n)
		insert(n, &obj)
	}
	display_front(&obj)
	display_back(&obj)
}
