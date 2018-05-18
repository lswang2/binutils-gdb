# New DSP instructions

## compare instructions

rD <- rA op rB for each unit size

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 5|4  |3  |2  |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:---:|:-:|:-:|:-:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b000 |OP2|OP1|U  |OP |S  |
 
- U : sign/unsign
0. signed except eq/ne
1. signed except ne/ne

- {OP2,OP1,OP} : operation codes
0. eq : true if equal
1. ne : true if not equal
2. reserved
3. reserved
4. ge : true if greater or equal
5. gt : true if greater
6. le : true if less or equal
7. lt : true if less

- S : operation size
0. byte
1. half word

## add/sub instructions

rD <- rA + rB for each unit size
or
rD <- rA - rB for each unit size

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 4|3  |2  |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:---:|:-:|:-:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b0100|T  |U  |A  |S  |

- T : saturaion bit
0. normal
1. saturated

- U : signed/unsigned
0. signed
1. unsigned

- A : add/sub
0. add
1. sub

- S : operation size
0. byte
1. half word

## select instructions

rD <= select rA or rB for each unit size

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 4|3 - 1|0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:---:|:---:|:-:|
|0x3F   |D      |A      |B      |res.  |b0101|OP   |S  |

- OP : operation codes
0. average signed : make average of A and B for each operation size
1. min signed : select min between A and B for each operation size
2. average unsigned : make average of A and B for each operation size
3. min unsigned : select min between A and B for each operation size
4. mux if ge : select A if ge for each operation size
5. max signed : select max between A and B for each operation size
6. mux if ov : select A if ge for each operation size
7. max unsigned : select max between A and B for each operation size

- S : operation size
0. byte
1. half word

## pack/unpack instructions

byte vs nibble
or
halfword vs byte

|31 - 26|25 - 21|20 - 16|15 - 11  |10 - 8|7 - 3  |2 - 1|0  |
|:-----:|:-----:|:-----:|:-------:|:----:|:-----:|:---:|:-:|
|0x3F   |D      |A      |B or res.|res.  |b0110_0|OP   |S  |

- OP : operation codes
0. pack signed
1. pack signed saturated
2. pack unsigned saturated
3. unpack signed

- S : operation size
0. byte
1. half word

## shift instructions

shift or rotate in each unit size

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 3  |2 - 1|0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:-----:|:---:|:-:|
|0x3F   |D      |A      |B      |res.  |b0110_1|OP   |S  |

- OP : operation codes
0. rotate left
1. shift left logical
2. shift right arithmetic
3. shift right logical

- S : operation size
0. byte
1. half word

## logical instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 2   |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:------:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b0111_00|OP |S  |

- OP : operation codes
0. NAND
1. NOR

## shift bytes instructions

rD <- {rA,rB} << (AMT*8)

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 2   |1 - 0|
|:-----:|:-----:|:-----:|:-----:|:----:|:------:|:---:|
|0x3F   |D      |A      |B      |res.  |b0111_01|AMT  |

- AMT : shift amount
0. D <= {A0,A1,A2,A3}
1. D <= {A1,A2,A3,B0}
2. D <= {A2,A3,B0,B1}
3. D <= {A3,B0,B1,B2}

## accumulation instructions

rD <- rA + (rB in unit sizes}

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 3  |2  |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:-----:|:-:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b0111_1|U  |0  |S  |

- U : signed/unsigned
0. signed
1. unsigned

- S : operation size
0. byte
1. half word

## basic halfword multiplication instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 3  |2  |1 - 0|
|:-----:|:-----:|:-----:|:-----:|:----:|:-----:|:-:|:---:|
|0x3F   |D      |A      |B      |res.  |b1000_0|U  |OP   |

- OP : operation codes
0. multiply and add saturated
1. multiply and subtract saturated
2. multiply saturated
3. multiply and get higher half word

- U : signed/unsigned
0. signed
1. unsigned

## basic byte multiplication instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 3  |2  |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:-----:|:-:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b1000_1|U  |1  |OP |

- OP : operation codes
0. multiply saturated into byte
1. multiply and get higher byte

- U : signed/unsigned
0. signed
1. unsigned

## half word multiplication instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 3  |2  |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:-----:|:-:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b1001_0|U  |X  |Y  |

- X : selection of A
0. use higher half word of A
1. use lower half word of A

- Y : selection of B
0. use higher half word of B
1. use lower half word of B

- U : signed/unsigned
0. signed
1. unsigned

## word and half word multiplication instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 3  |2  |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:-----:|:-:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b1001_1|U  |H  |Y  |

- Y : selection of B
0. use higher half word of B
1. use lower half word of B

- H : output mux
0. get saturated lower 32bit of result
1. get higher 32bit of result

- U : signed/unsigned
0. signed
1. unsigned

## move partial instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 5|4 - 3|2 - 1|0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:---:|:---:|:---:|:-:|
|0x3F   |D      |A      |B      |res.  |b101 |SRC  |DST  |S  |

move b[i] -> d[i], and other data from a
half word transfer should be aligned

- S : tranfer size
0. byte
1. half word

- SRC : source byte offset

- DST : destination byte offset


## extension instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 3  |2  |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:-----:|:-:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b1100_0|U  |T  |S  |

- U : signed/unsigned
0. signed
1. unsigned

- S : source size
0. from byte
1. from half word

- T : target size
0. to half word
1. to word

## ordering instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 2   |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:------:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b1100_10|B  |W  |

- W : operation unit
0. each half word
1. word

- B : bit/byte
0. bit
1. byte

- {TS}
01. {xx,b2,b3} -> {ext,b2,ext,b3}

## flag instructions

|31 - 26|25 - 21|20 - 16|15 - 11|10 - 8|7 - 2   |1  |0  |
|:-----:|:-----:|:-----:|:-----:|:----:|:------:|:-:|:-:|
|0x3F   |D      |A      |B      |res.  |b1101_00|O  |A  |

- O : overflow flag
0. GE_flag
1. OV_flag

- A : anding
0. ORing
1. ANDing





