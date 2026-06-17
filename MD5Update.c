
/* protected: void __thiscall CMD5::MD5Update(struct CMD5::MD5_CTX *,unsigned char *,unsigned int)
    */

void __thiscall CMD5::MD5Update(CMD5 *this,MD5_CTX *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  MD5_CTX *pMVar4;
  MD5_CTX *pMVar5;
  
                    /* 0x19e190  2575  ?MD5Update@CMD5@@IAEXPAUMD5_CTX@1@PAEI@Z */
  uVar3 = *(uint *)(param_1 + 0x10) + param_3 * 8;
  uVar1 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (uVar3 < param_3 * 8) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  uVar3 = -uVar1 + 0x40;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  if (param_3 < uVar3) {
    uVar3 = 0;
  }
  else {
    pMVar4 = (MD5_CTX *)param_2;
    pMVar5 = param_1 + uVar1 + 0x18;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pMVar5 = *(undefined4 *)pMVar4;
      pMVar4 = pMVar4 + 4;
      pMVar5 = pMVar5 + 4;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pMVar5 = *pMVar4;
      pMVar4 = pMVar4 + 1;
      pMVar5 = pMVar5 + 1;
    }
    FUN_3619d8d0((int *)param_1);
    for (uVar1 = -uVar1 + 0x7f; uVar1 < param_3; uVar1 = uVar1 + 0x40) {
      FUN_3619d8d0((int *)param_1);
      uVar3 = uVar3 + 0x40;
    }
    uVar1 = 0;
  }
  pMVar4 = (MD5_CTX *)(param_2 + uVar3);
  pMVar5 = param_1 + uVar1 + 0x18;
  for (uVar2 = param_3 - uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pMVar5 = *(undefined4 *)pMVar4;
    pMVar4 = pMVar4 + 4;
    pMVar5 = pMVar5 + 4;
  }
  for (uVar3 = param_3 - uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pMVar5 = *pMVar4;
    pMVar4 = pMVar4 + 1;
    pMVar5 = pMVar5 + 1;
  }
  return;
}

