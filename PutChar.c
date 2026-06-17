
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned long __thiscall CDrawPort::PutChar(struct GFXVertex *,struct GFXTexCoord
   *,struct GFXColor *,struct
   GFXColor,float,float,float,float,float,float,float,float,float,float,float)const  */

ulong __thiscall
CDrawPort::PutChar(CDrawPort *this,float *param_1,undefined4 *param_2,undefined4 *param_3,
                  undefined4 param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10,float param_11,float param_12,undefined4 param_13,
                  undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 local_4;
  
                    /* 0x693d0  2877
                       ?PutChar@CDrawPort@@QBEKPAUGFXVertex@@PAUGFXTexCoord@@PAUGFXColor@@U4@MMMMMMMMMMM@Z
                        */
  fVar4 = *(float *)(this + 0x34) * *(float *)(this + 0x30) * *(float *)(this + 0x38);
  fVar1 = *(float *)(this + 0x30);
  fVar2 = *(float *)(this + 0x38);
  bVar3 = fVar4 != _DAT_3622376c;
  if (bVar3) {
    FUN_360605c0(&local_4,0);
    local_4 = CONCAT13(param_5._3_1_,(undefined3)local_4);
    param_1[2] = param_12;
    param_1[8] = param_12;
    *param_1 = fVar4 + param_7 + param_8;
    fVar5 = fVar1 * fVar2 + param_10;
    param_1[5] = param_12;
    param_1[0xb] = param_12;
    param_1[1] = fVar5;
    param_1[3] = fVar4 + param_8;
    fVar1 = fVar1 * fVar2 + param_11;
    param_1[4] = fVar1;
    param_1[6] = param_9 + fVar4 + param_6;
    param_1[7] = fVar1;
    param_1[9] = fVar4 + param_6 + param_7 + param_9;
    param_1[10] = fVar5;
    param_2[1] = param_15;
    param_2[2] = param_13;
    *param_2 = param_13;
    param_2[3] = param_16;
    param_2[4] = param_14;
    param_2[5] = param_16;
    param_2[6] = param_14;
    param_2[7] = param_15;
    *param_3 = local_4;
    param_3[1] = local_4;
    param_3[2] = local_4;
    param_3[3] = local_4;
    param_3 = param_3 + 4;
    param_1 = param_1 + 0xc;
    param_2 = param_2 + 8;
  }
  param_1[1] = param_10;
  param_1[2] = param_12;
  *param_1 = param_7 + param_8;
  param_1[3] = param_8;
  param_1[4] = param_11;
  param_1[5] = param_12;
  param_1[6] = param_6 + param_9;
  param_1[7] = param_11;
  param_1[8] = param_12;
  param_1[10] = param_10;
  param_1[0xb] = param_12;
  param_1[9] = param_6 + param_7 + param_9;
  *param_2 = param_13;
  param_2[1] = param_15;
  param_2[2] = param_13;
  param_2[3] = param_16;
  param_2[4] = param_14;
  param_2[5] = param_16;
  param_2[6] = param_14;
  param_2[7] = param_15;
  *param_3 = param_5;
  param_3[1] = param_5;
  param_3[2] = param_5;
  param_3[3] = param_5;
  return bVar3 + 1;
}

