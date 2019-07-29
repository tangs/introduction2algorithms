2.1-1:
    A = [31, 41, 59, 26, 41, 58]
    a): {31} [41] 59 26 41 58
    b): 31 {41} [59] 26 41 58
    c): {31} -> {41} -> {59} -> [26] 41 58   
          <-----------------------
    d): 26 31 41 {59} -> [41] 58
                   <-------
    e): 26 31 41 41 59 -> 58
                     <-----
    f): 26 31 41 41 58 59

2.1-3:
    SearchIndex(A, v)
        for i <- 1 to length[A]
            if A[i] == v
                return i
        return nil

    analysis:
        Initialization: 循环开始前i=1，显然A[1]是数组的首个元素。
        Maintenance:循环每次向右移动一个位置，直到在适当的位置停下。
        Termination:如果在for循环中找到等于v的值就停下，返回i,否则返回nil。

2.1-4:
    BinarayAddition(A, B, n)
        ▹ 声明数组C
        do C[n + 1]
            ▹ 进位标志
            do carryBit <- 0
                for i <- 1 to n
                    do ret = A[i] + B[i] + carryBit
                        C[i] = ret % 2
                        if ret > 1
                            carryBit = 1
                        else
                            carryBit = 0
        return C

2.2-1:
    Θ(n^3)

2.2-2:
    SelectionSort(A, n)
        for i <- 1 to n
            ▹ 最小值位置
            minIdx <- i
            for j <- i + 1 to n - 1
                if A[j] < A[minIdx]
                    minIdx = j
            swap(A[i], A[minIdx])

2.3-1:
    A = {3, 41, 52, 26, 38, 57, 9, 49}
        3 9 26 38 41 49 52 57
      3 26 41 52     9 38 49 57
    3 41    26 52   38 57   9 49
    3 41    52 26   38 57   9 49
