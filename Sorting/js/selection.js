"use strict";

// 👉👉👉👉👉👉👉 selection sort

// increasing order

const selectionSort = (arr, size) => {
  for (let i = 0; i < size - 1; i++) {
    let minIndex = i;
    for (let j = i + 1; j < size; j++) {
      if (arr[j] < arr[minIndex]) minIndex = j;
    }
    if (i !== minIndex) [arr[minIndex], arr[i]] = [arr[i], arr[minIndex]];
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
  let swapped = false;
  for (let i = 0; i < size - 1; i++) {
    for (let j = 0; j < size - (i + 1); j++) {
      if (arr[j] > arr[j + 1]) {
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
        swapped = true;
      }
    }
    //checking best case
    if (swapped === false) break;
  }
  return arr;
};

const arr = [5, 2, 15, 4, 12, 3, 7];

const sortedArr = bubbleSort(arr, arr.length);

console.log(sortedArr);
