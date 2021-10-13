ll secondlar(vector<ll> &arr[],long long int n) {
//     ll largest = 0, secondLargest = -1;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > arr[largest])
//             largest = i;
//     }
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != arr[largest]) {
//             if (secondLargest == -1)
//                 secondLargest = i;
//             else if (arr[i] > arr[secondLargest])
//                 secondLargest = i;
//         }
//     }
//     return secondLargest;
// }