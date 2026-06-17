
/* protected: void __thiscall CMD5::MD5Init(struct CMD5::MD5_CTX *) */

void __thiscall CMD5::MD5Init(CMD5 *this,MD5_CTX *param_1)

{
                    /* 0x19d820  2574  ?MD5Init@CMD5@@IAEXPAUMD5_CTX@1@@Z */
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0x67452301;
  *(undefined4 *)(param_1 + 4) = 0xefcdab89;
  *(undefined4 *)(param_1 + 8) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0xc) = 0x10325476;
  return;
}

