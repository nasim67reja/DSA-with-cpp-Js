"use strict";

// 👉👉👉👉👉👉👉 selection sort

// increasing order

const selectionSort = (arr, size) => {
  for (let i = 0; i < size - 1; i++) {
    let minIndex = i;
    for (let j = i + 1; j < size; j++) {
      if (arr[j] < arr[minIndex]) minIndex = j;
    }
    [arr[minIndex], arr[i]] = [arr[i], arr[minIndex]];
  }
  return arr;
};

// decreasing order
const selectionSortDecreasingOrder = (arr, size) => {
  for (let i = 0; i < size - 1; i++) {
    let minIndex = i;
    for (let j = i + 1; j < size; j++) {
      if (arr[j] > arr[minIndex]) minIndex = j;
    }
    [arr[minIndex], arr[i]] = [arr[i], arr[minIndex]];
  }
  return arr;
};

// Bubble sort
const bubbleSort = (arr, size) => {
  for (let i = 0; i < size - 1; i++) {
    let bigIndex = i;
    for (let j = i + 1; j < size - 1; j++) {
      if (arr[bigIndex] > arr[j])
        [arr[minIndex], arr[j]] = [arr[j], arr[minIndex]];
    }
  }
};

const arr = [5, 2, 4, 12, 3, 7];

const sortedArr = selectionSortDecreasingOrder(arr, arr.length);

console.log(sortedArr);
