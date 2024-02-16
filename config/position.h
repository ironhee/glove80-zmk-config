/*
                    ╭───────────────────────────────╮                                 ╭───────────────────────────────╮
  (Left Row 1) L1_X │ L1_6 L1_5 L1_4 L1_3 L1_2      │                                 │      R1_2 R1_3 R1_4 R1_5 R1_6 │ R1_X (Right Row 1)
  (Left Row 2) L2_X │ L2_6 L2_5 L2_4 L2_3 L2_2 L2_1 │                                 │ R2_1 R2_2 R2_3 R2_4 R2_5 R2_6 │ R2_X (Right Row 2)
  (Left Row 3) L3_X │ L3_6 L3_5 L3_4 L3_3 L3_2 L3_1 │                                 │ R3_1 R3_2 R3_3 R3_4 R3_5 R3_6 │ R3_X (Right Row 3)
  (Left Row 4) L4_X │ L4_6 L4_5 L4_4 L4_3 L4_2 L4_1 │                                 │ R4_1 R4_2 R4_3 R4_4 R4_5 R4_6 │ R4_X (Right Row 4)
  (Left Row 5) L5_X │ L5_6 L5_5 L5_4 L5_3 L5_2 L5_1 │                                 │ R5_1 R5_2 R5_3 R5_4 R5_5 R5_6 │ R5_X (Right Row 5)
  (Left Row 6) L6_X │ L6_6 L6_5 L6_4 L6_3 L6_2      │                                 │      R6_2 R6_3 R6_4 R6_5 R6_6 │ R6_X (Right Row 6)
                    ╰─────────────────────────────╮ ╰───────────────╮ ╭───────────────╯ ╭─────────────────────────────╯
                                (Left Thumb) LT_X │  LT_1 LT_2 LT_3 │ │ RT_3 RT_2 RT_1  │ RT_X (Right Thumb)
                                                  │  LT_4 LT_5 LT_6 │ │ RT_6 RT_5 RT_4  │
                                                  ╰─────────────────╯ ╰─────────────────╯
*/

#pragma once

// Left hand row 1
#define L1_6 0
#define L1_5 1
#define L1_4 2
#define L1_3 3
#define L1_2 4
#define L1_X L1_6 L1_5 L1_4 L1_3 L1_2

// Right hand row 1
#define R1_2 5
#define R1_3 6
#define R1_4 7
#define R1_5 8
#define R1_6 9
#define R1_X R1_2 R1_3 R1_4 R1_5 R1_6

// Left hand row 2
#define L2_6 10
#define L2_5 11
#define L2_4 12
#define L2_3 13
#define L2_2 14
#define L2_1 15
#define L2_X L2_6 L2_5 L2_4 L2_3 L2_2 L2_1

// Right hand row 2
#define R2_1 16
#define R2_2 17
#define R2_3 18
#define R2_4 19
#define R2_5 20
#define R2_6 21
#define R2_X R2_1 R2_2 R2_3 R2_4 R2_5 R2_6

// Left hand row 3
#define L3_6 22
#define L3_5 23
#define L3_4 24
#define L3_3 25
#define L3_2 26
#define L3_1 27
#define L3_X L3_6 L3_5 L3_4 L3_3 L3_2 L3_1

// Right hand row 3
#define R3_1 28
#define R3_2 29
#define R3_3 30
#define R3_4 31
#define R3_5 32
#define R3_6 33
#define R3_X R3_1 R3_2 R3_3 R3_4 R3_5 R3_6

// Left hand row 4
#define L4_6 34
#define L4_5 35
#define L4_4 36
#define L4_3 37
#define L4_2 38
#define L4_1 39
#define L4_X L4_6 L4_5 L4_4 L4_3 L4_2 L4_1

// Right hand row 4
#define R4_1 40
#define R4_2 41
#define R4_3 42
#define R4_4 43
#define R4_5 44
#define R4_6 45
#define R4_X R4_1 R4_2 R4_3 R4_4 R4_5 R4_6

// Left hand row 5
#define L5_6 46
#define L5_5 47
#define L5_4 48
#define L5_3 49
#define L5_2 50
#define L5_1 51
#define L5_X L5_6 L5_5 L5_4 L5_3 L5_2 L5_1

// Right hand row 5
#define R5_1 58
#define R5_2 59
#define R5_3 60
#define R5_4 61
#define R5_5 62
#define R5_6 63
#define R5_X R5_1 R5_2 R5_3 R5_4 R5_5 R5_6

// Left hand row 6
#define L6_6 64
#define L6_5 65
#define L6_4 66
#define L6_3 67
#define L6_2 68
#define L6_X L6_6 L6_5 L6_4 L6_3 L6_2

// Right hand row 6
#define R6_2 75
#define R6_4 77
#define R6_3 76
#define R6_5 78
#define R6_6 79
#define R6_X R6_2 R6_4 R6_3 R6_5 R6_6

// Left hand thumb
#define LT_1 52
#define LT_2 53
#define LT_3 54
#define LT_4 69
#define LT_5 70
#define LT_6 71
#define LT_X LT_1 LT_2 LT_3 LT_4 LT_5 LT_6

// Right hand thumb
#define RT_1 57
#define RT_2 56
#define RT_3 55
#define RT_4 74
#define RT_5 73
#define RT_6 72
#define RT_X RT_1 RT_2 RT_3 RT_4 RT_5 RT_6