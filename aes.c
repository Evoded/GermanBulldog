#include<stdio.h>

int subword(unsigned char w){ 
    unsigned int Sbox[16][16]={  
{0x63,0x7c,0x77,0x7b,0xf2,0x6b,0x6f,0xc5,0x30,0x01,0x67,0x2b,0xfe,0xd7,0xab,0x76},
{0xca,0x82,0xc9,0x7d,0xfa,0x59,0x47,0xf0,0xad,0xd4,0xa2,0xaf,0x9c,0xa4,0x72,0xc0},
{0xb7,0xfd,0x93,0x26,0x36,0x3f,0xf7,0xcc,0x34,0xa5,0xe5,0xf1,0x71,0xd8,0x31,0x15},
{0x04,0xc7,0x23,0xc3,0x18,0x96,0x05,0x9a,0x07,0x12,0x80,0xe2,0xeb,0x27,0xb2,0x75},
{0x09,0x83,0x2c,0x1a,0x1b,0x6e,0x5a,0xa0,0x52,0x3b,0xd6,0xb3,0x29,0xe3,0x2f,0x84},
{0x53,0xd1,0x00,0xed,0x20,0xfc,0xb1,0x5b,0x6a,0xcb,0xbe,0x39,0x4a,0x4c,0x58,0xcf},
{0xd0,0xef,0xaa,0xfb,0x43,0x4d,0x33,0x85,0x45,0xf9,0x02,0x7f,0x50,0x3c,0x9f,0xa8},
{0x51,0xa3,0x40,0x8f,0x92,0x9d,0x38,0xf5,0xbc,0xb6,0xda,0x21,0x10,0xff,0xf3,0xd2},
{0xcd,0x0c,0x13,0xec,0x5f,0x97,0x44,0x17,0xc4,0xa7,0x7e,0x3d,0x64,0x5d,0x19,0x73},
{0x60,0x81,0x4f,0xdc,0x22,0x2a,0x90,0x88,0x46,0xee,0xb8,0x14,0xde,0x5e,0x0b,0xdb},
{0xe0,0x32,0x3a,0x0a,0x49,0x06,0x24,0x5c,0xc2,0xd3,0xac,0x62,0x91,0x95,0xe4,0x79},
{0xe7,0xc8,0x37,0x6d,0x8d,0xd5,0x4e,0xa9,0x6c,0x56,0xf4,0xea,0x65,0x7a,0xae,0x08},
{0xba,0x78,0x25,0x2e,0x1c,0xa6,0xb4,0xc6,0xe8,0xdd,0x74,0x1f,0x4b,0xbd,0x8b,0x8a},
{0x70,0x3e,0xb5,0x66,0x48,0x03,0xf6,0x0e,0x61,0x35,0x57,0xb9,0x86,0xc1,0x1d,0x9e},
{0xe1,0xf8,0x98,0x11,0x69,0xd9,0x8e,0x94,0x9b,0x1e,0x87,0xe9,0xce,0x55,0x28,0xdf},
{0x8c,0xa1,0x89,0x0d,0xbf,0xe6,0x42,0x68,0x41,0x99,0x2d,0x0f,0xb0,0x54,0xbb,0x16}};
    unsigned char x,y;
    x = w >> 4;
    y = w & 0xf;

    return Sbox[x][y];
}
int invsubword(unsigned char w){ 
    unsigned int invSbox[16][16]={
{0x52,0x09,0x6a,0xd5,0x30,0x36,0xa5,0x38,0xbf,0x40,0xa3,0x9e,0x81,0xf3,0xd7,0xfb},
{0x7c,0xe3,0x39,0x82,0x9b,0x2f,0xff,0x87,0x34,0x8e,0x43,0x44,0xc4,0xde,0xe9,0xcb},
{0x54,0x7b,0x94,0x32,0xa6,0xc2,0x23,0x3d,0xee,0x4c,0x95,0x0b,0x42,0xfa,0xc3,0x4e},
{0x08,0x2e,0xa1,0x66,0x28,0xd9,0x24,0xb2,0x76,0x5b,0xa2,0x49,0x6d,0x8b,0xd1,0x25},
{0x72,0xf8,0xf6,0x64,0x86,0x68,0x98,0x16,0xd4,0xa4,0x5c,0xcc,0x5d,0x65,0xb6,0x92},
{0x6c,0x70,0x48,0x50,0xfd,0xed,0xb9,0xda,0x5e,0x15,0x46,0x57,0xa7,0x8d,0x9d,0x84},
{0x90,0xd8,0xab,0x00,0x8c,0xbc,0xd3,0x0a,0xf7,0xe4,0x58,0x05,0xb8,0xb3,0x45,0x06},
{0xd0,0x2c,0x1e,0x8f,0xca,0x3f,0x0f,0x02,0xc1,0xaf,0xbd,0x03,0x01,0x13,0x8a,0x6b},
{0x3a,0x91,0x11,0x41,0x4f,0x67,0xdc,0xea,0x97,0xf2,0xcf,0xce,0xf0,0xb4,0xe6,0x73},
{0x96,0xac,0x74,0x22,0xe7,0xad,0x35,0x85,0xe2,0xf9,0x37,0xe8,0x1c,0x75,0xdf,0x6e},
{0x47,0xf1,0x1a,0x71,0x1d,0x29,0xc5,0x89,0x6f,0xb7,0x62,0x0e,0xaa,0x18,0xbe,0x1b},
{0xfc,0x56,0x3e,0x4b,0xc6,0xd2,0x79,0x20,0x9a,0xdb,0xc0,0xfe,0x78,0xcd,0x5a,0xf4},
{0x1f,0xdd,0xa8,0x33,0x88,0x07,0xc7,0x31,0xb1,0x12,0x10,0x59,0x27,0x80,0xec,0x5f},
{0x60,0x51,0x7f,0xa9,0x19,0xb5,0x4a,0x0d,0x2d,0xe5,0x7a,0x9f,0x93,0xc9,0x9c,0xef},
{0xa0,0xe0,0x3b,0x4d,0xae,0x2a,0xf5,0xb0,0xc8,0xeb,0xbb,0x3c,0x83,0x53,0x99,0x61},
{0x17,0x2b,0x04,0x7e,0xba,0x77,0xd6,0x26,0xe1,0x69,0x14,0x63,0x55,0x21,0x0c,0x7d}};
    unsigned char x,y;
    x = w >> 4;
    y = w & 0xf;

    return invSbox[x][y];
}

int rotword(int w3){ 
    int tmp;
    unsigned char wn[40];
    int w = 0;

    wn[3] = w3;
    wn[2] = w3 >> 8;
    wn[1] = w3 >> 16;
    wn[0] = w3 >> 24;

    tmp = wn[0];
    wn[0] = wn[1];
    wn[1] = wn[2];
    wn[2] = wn[3];
    wn[3] = tmp;

    w = w + wn[0];
    w = w << 8 ;
    w = w + wn[1];
    w = w << 8 ;
    w = w + wn[2];
    w = w << 8 ;
    w = w + wn[3];

    return w;    
}

unsigned char rot(unsigned char mtmp2, char i){ 
    unsigned char tmp;

    tmp = mtmp2 << i;
    mtmp2 = mtmp2 >> (8-i);

    //x^10のとき
    if(mtmp2 >= 0x4){
        tmp =tmp  ^ 0x6c;
        mtmp2 = mtmp2 ^ 0x4;
    }

    //x^9のとき
    if(mtmp2 >= 0x2 ){
        tmp = tmp ^ 0x36;
        mtmp2 = mtmp2 & 0x1;
    }

    //x^8のとき
    if(mtmp2 >= 0x1){
        tmp = tmp ^ 0x1b;
    }

    return tmp;
}

int Bconversion(unsigned char s){
    unsigned int B[2], b;
    int i;

    for(i=0; i<2; i++){
        if(i == 0)   B[i] = s >> 4;
        else   B[i] = s % 0x10;        
    }

    for(i=0; i<2; i++){
        if(B[i] == 0x1)    B[i] = 1;
        else if(B[i] == 0x2)    B[i] = 10;
        else if(B[i] == 0x3)    B[i] = 11;
        else if(B[i] == 0x4)    B[i] = 100;
        else if(B[i] == 0x5)    B[i] = 101;
        else if(B[i] == 0x6)    B[i] = 110;
        else if(B[i] == 0x7)    B[i] = 111;
        else if(B[i] == 0x8)    B[i] = 1000;
        else if(B[i] == 0x9)    B[i] = 1001;
        else if(B[i] == 0xa)    B[i] = 1010;
        else if(B[i] == 0xb)    B[i] = 1011;
        else if(B[i] == 0xc)    B[i] = 1100;
        else if(B[i] == 0xd)    B[i] = 1101;
        else if(B[i] == 0xe)    B[i] = 1110;
        else if(B[i] == 0xf)    B[i] = 1111;
        else    B[i] = 0;
    }
    b = B[0]*10000 + B[1];

    return b;
}

int main(void){
    int inM;
    int input[4]={0x00000000,0x00000000,0x00000000,0x00000000};
    int w[44];     //128bit
    char i,j,ibody,r1,r2,r3;
    unsigned char wn[4];
    int k[11][4], b[4][4];
    unsigned char key[11][4][4];
    unsigned char s[4][4], mtmp[4][4][4];
    int rcon[10] = {1,2,3,8,16,32,64,128,0x1b,0x36};
    int tmp, tmp1;
    FILE *fpe, *fpd;

    fpe = fopen("enc.txt","w");
    fpd = fopen("dec.txt","w");

    printf("32bit(8桁)ごとに平文を入力\n");
    for(i=0; i<4; i++){
        scanf("%x",&input[i]);
    }

    //sboxの準備
    for(i=0; i<4; i++){
        for(j=0; j<4; j++)
            s[i][3-j] = input[i] >> 8*j;
    }

    //鍵の生成
    //
    w[0]=0x00010203;
    w[1]=0x04050607;
    w[2]=0x08090a0b;
    w[3]=0x0c0d0e0f;

    for(r1=0; r1<4; r1++){
        for(r2=0; r2<4; r2++)
            key[0][r1][3-r2] = w[r1] >> 8*r2;
    }

    for(i=1; i<11; i++){    //4i-1を1バイト毎に分割
        //4a-1
        tmp1 = rotword(w[4*i-1]);
        //4-a
        wn[3] = tmp1;
        wn[2] = tmp1 >> 8;
        wn[1] = tmp1 >> 16;
        wn[0] = tmp1 >> 24;

        //4a-2
        for(j=0; j<4; j++)
            wn[j] = subword(wn[j]);

        tmp1 = wn[0];
        tmp1 = tmp1 << 8;
        tmp1 = tmp1 + wn[1];
        tmp1 = tmp1 << 8;
        tmp1 = tmp1 + wn[2];
        tmp1 = tmp1 << 8;
        tmp1 = tmp1 + wn[3];

        //4a-3
        tmp = rcon[i-1] << 24;
        tmp = tmp1 ^ tmp;

        w[4*i] = w[4*i-4] ^ tmp;
        w[4*i+1] = w[4*i-3] ^ w[4*i];
        w[4*i+2] = w[4*i-2] ^ w[4*i+1];
        w[4*i+3] = w[4*i-1] ^ w[4*i+2];

        //4d
        k[i][0] = w[4*i];
        k[i][1] = w[4*i+1];
        k[i][2] = w[4*i+2];
        k[i][3] = w[4*i+3];
    }

    //鍵の代入
    for(r1=1;r1<i;r1++){
        for(r2=0;r2<4;r2++){
            for(r3=0;r3<4;r3++){
                key[r1][r2][3-r3] = k[r1][r2] >> (8*r3);
            }
        }
    }

    //平文のテスト表示
    printf("before enc\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%02x\t",s[i][j]);
        printf("\n");
    }

    //addroundkey
    for(r1=0;r1<4;r1++){
        for(r2=0;r2<4;r2++)
            s[r1][r2] = s[r1][r2] ^ key[0][r1][r2];
    }
    int loop = 10;

    //AES本体
    for(ibody=1;ibody<loop+1;ibody++){
        //subbytes
        for(r1=0;r1<4;r1++){
            for(r2=0;r2<4;r2++)
                s[r1][r2] = subword(s[r1][r2]);
        }

        //ShiftRows
        for(i=0;i<4;i++){
            for(j=0;j<i;j++){
                tmp = s[0][i];
                s[0][i] = s[1][i];
                s[1][i] = s[2][i];
                s[2][i] = s[3][i];
                s[3][i] = tmp;
            }
        }

        //Mixcolumns
        if(ibody!=10){
            for(i=0;i<4;i++){
                mtmp[0][i][0] = s[i][1] ^ s[i][2] ^ s[i][3];
                mtmp[0][i][1] = s[i][0] ^ s[i][2] ^ s[i][3];
                mtmp[0][i][2] = s[i][0] ^ s[i][1] ^ s[i][3];
                mtmp[0][i][3] = s[i][0] ^ s[i][1] ^ s[i][2];
            }

            for(i=0;i<4;i++){
                mtmp[1][i][0] = s[i][0] ^ s[i][1];
                mtmp[1][i][1] = s[i][1] ^ s[i][2];
                mtmp[1][i][2] = s[i][2] ^ s[i][3];
                mtmp[1][i][3] = s[i][3] ^ s[i][0];
            }

            for(i=0;i<4;i++){
                for(j=0;j<4;j++)
                    mtmp[1][i][j] = rot(mtmp[1][i][j],1);
            }

            for(i=0;i<4;i++){
                for(j=0;j<4;j++)
                    s[i][j] = mtmp[0][i][j] ^ mtmp[1][i][j];
            }
        }

        //addroundkey
        for(r1=0;r1<4;r1++){
            for(r2=0;r2<4;r2++)
                s[r1][r2] = s[r1][r2] ^ key[ibody][r1][r2];
        }
    }
    
    //暗号文のテスト表示
    printf("after enc\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%02x\t",s[i][j]);
            b[i][j] = Bconversion(s[i][j]);
            fprintf(fpe, "%08d",b[i][j]);
        }
        printf("\n");
    }

    //invAES本体
    for(ibody=0;ibody<10;ibody++){
        //inv-addroundkey
        for(r1=0;r1<4;r1++){
            for(r2=0;r2<4;r2++)
                s[r1][r2] = s[r1][r2] ^ key[10-ibody][r1][r2];
        }
    
        //inv-Mixcolumns
        if(ibody!=0){
            //1
            for(i=0;i<4;i++){
                mtmp[0][i][0] = s[i][1] ^ s[i][2] ^ s[i][3];
                mtmp[0][i][1] = s[i][0] ^ s[i][2] ^ s[i][3];
                mtmp[0][i][2] = s[i][0] ^ s[i][1] ^ s[i][3];
                mtmp[0][i][3] = s[i][0] ^ s[i][1] ^ s[i][2];
            }

            //x
            for(i=0;i<4;i++){
                mtmp[1][i][0] = s[i][0] ^ s[i][1];
                mtmp[1][i][1] = s[i][1] ^ s[i][2];
                mtmp[1][i][2] = s[i][2] ^ s[i][3];
                mtmp[1][i][3] = s[i][3] ^ s[i][0];
            }

            for(i=0;i<4;i++){
                for(j=0;j<4;j++)
                    mtmp[1][i][j] = rot(mtmp[1][i][j],1);
            }
            
            //x^2
            for(i=0;i<4;i++){
                mtmp[2][i][0] = s[i][0] ^ s[i][2];
                mtmp[2][i][1] = s[i][1] ^ s[i][3];
                mtmp[2][i][2] = s[i][0] ^ s[i][2];
                mtmp[2][i][3] = s[i][1] ^ s[i][3];
            }

            for(i=0;i<4;i++){
                for(j=0;j<4;j++)
                    mtmp[2][i][j] = rot(mtmp[2][i][j],2);
            }

            //x^3
            for(i=0;i<4;i++){
                mtmp[3][i][0] = s[i][0] ^ s[i][1] ^ s[i][2] ^ s[i][3];
                mtmp[3][i][1] = s[i][0] ^ s[i][1] ^ s[i][2] ^ s[i][3];
                mtmp[3][i][2] = s[i][0] ^ s[i][1] ^ s[i][2] ^ s[i][3];
                mtmp[3][i][3] = s[i][0] ^ s[i][1] ^ s[i][2] ^ s[i][3];
            }

            //s^{-1}
            for(i=0;i<4;i++){
                for(j=0;j<4;j++)
                    mtmp[3][i][j] = rot(mtmp[3][i][j],3);
            }

            for(i=0;i<4;i++){
                for(j=0;j<4;j++)
                    s[i][j] = mtmp[0][i][j] ^ mtmp[1][i][j] ^ mtmp[2][i][j] ^ mtmp[3][i][j];
            }
        }

        //inv-ShiftRows
        for(i=0;i<4;i++){
            for(j=0;j<i;j++){
                tmp = s[3][i];
                s[3][i] = s[2][i];
                s[2][i] = s[1][i];
                s[1][i] = s[0][i];
                s[0][i] = tmp;
            }
        }

        //inv-subbytes
        for(r1=0;r1<4;r1++){
            for(r2=0;r2<4;r2++)
                s[r1][r2] = invsubword(s[r1][r2]);
        }
    }

    //addroundkey
        for(r1=0;r1<4;r1++){
            for(r2=0;r2<4;r2++)
                s[r1][r2] = s[r1][r2] ^ key[0][r1][r2];
    }

    //復号した平文のテスト表示
    printf("after dec\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%02x\t",s[i][j]);
            b[i][j] = Bconversion(s[i][j]);
            fprintf(fpd, "%08d",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
