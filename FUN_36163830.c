
void __cdecl
FUN_36163830(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int iVar3;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int aiStack_60 [24];
  
  (*DAT_362c4634)();
  afStack_c0[0] =
       param_1 * DAT_362fe148 + param_3 * DAT_362fe150 + param_2 * DAT_362fe14c + DAT_362fe154;
  afStack_c0[1] =
       param_1 * DAT_362fe158 + param_3 * DAT_362fe160 + param_2 * DAT_362fe15c + DAT_362fe164;
  afStack_c0[2] =
       param_2 * DAT_362fe16c + param_1 * DAT_362fe168 + param_3 * DAT_362fe170 + DAT_362fe174;
  afStack_c0[3] =
       param_4 * DAT_362fe148 + param_3 * DAT_362fe150 + param_2 * DAT_362fe14c + DAT_362fe154;
  fStack_b0 = param_4 * DAT_362fe158 + param_3 * DAT_362fe160 + param_2 * DAT_362fe15c +
              DAT_362fe164;
  fStack_ac = param_2 * DAT_362fe16c + param_4 * DAT_362fe168 + param_3 * DAT_362fe170 +
              DAT_362fe174;
  fStack_a8 = param_4 * DAT_362fe148 + param_6 * DAT_362fe150 + param_2 * DAT_362fe14c +
              DAT_362fe154;
  fStack_a4 = param_4 * DAT_362fe158 + param_6 * DAT_362fe160 + param_2 * DAT_362fe15c +
              DAT_362fe164;
  fStack_a0 = param_2 * DAT_362fe16c + param_4 * DAT_362fe168 + param_6 * DAT_362fe170 +
              DAT_362fe174;
  fStack_9c = param_1 * DAT_362fe148 + param_6 * DAT_362fe150 + param_2 * DAT_362fe14c +
              DAT_362fe154;
  fStack_98 = param_1 * DAT_362fe158 + param_6 * DAT_362fe160 + param_2 * DAT_362fe15c +
              DAT_362fe164;
  fStack_94 = param_2 * DAT_362fe16c + param_1 * DAT_362fe168 + param_6 * DAT_362fe170 +
              DAT_362fe174;
  fStack_90 = param_1 * DAT_362fe148 + param_3 * DAT_362fe150 + param_5 * DAT_362fe14c +
              DAT_362fe154;
  fStack_8c = param_1 * DAT_362fe158 + param_3 * DAT_362fe160 + param_5 * DAT_362fe15c +
              DAT_362fe164;
  fStack_88 = param_5 * DAT_362fe16c + param_1 * DAT_362fe168 + param_3 * DAT_362fe170 +
              DAT_362fe174;
  fStack_84 = param_4 * DAT_362fe148 + param_3 * DAT_362fe150 + param_5 * DAT_362fe14c +
              DAT_362fe154;
  fStack_80 = param_4 * DAT_362fe158 + param_3 * DAT_362fe160 + param_5 * DAT_362fe15c +
              DAT_362fe164;
  iVar3 = 0;
  aiStack_60[0] = 0;
  aiStack_60[1] = 1;
  aiStack_60[2] = 1;
  aiStack_60[3] = 2;
  aiStack_60[4] = 2;
  fStack_7c = param_5 * DAT_362fe16c + param_4 * DAT_362fe168 + param_3 * DAT_362fe170 +
              DAT_362fe174;
  aiStack_60[5] = 3;
  aiStack_60[6] = 3;
  aiStack_60[7] = 0;
  aiStack_60[8] = 0;
  aiStack_60[9] = 4;
  aiStack_60[10] = 1;
  fStack_78 = param_4 * DAT_362fe148 + param_6 * DAT_362fe150 + param_5 * DAT_362fe14c +
              DAT_362fe154;
  fStack_74 = param_4 * DAT_362fe158 + param_6 * DAT_362fe160 + param_5 * DAT_362fe15c +
              DAT_362fe164;
  fStack_70 = param_5 * DAT_362fe16c + param_4 * DAT_362fe168 + param_6 * DAT_362fe170 +
              DAT_362fe174;
  fStack_6c = param_1 * DAT_362fe148 + param_6 * DAT_362fe150 + param_5 * DAT_362fe14c +
              DAT_362fe154;
  fStack_68 = param_1 * DAT_362fe158 + param_6 * DAT_362fe160 + param_5 * DAT_362fe15c +
              DAT_362fe164;
  fStack_64 = param_5 * DAT_362fe16c + param_1 * DAT_362fe168 + param_6 * DAT_362fe170 +
              DAT_362fe174;
  aiStack_60[0xc] = 2;
  aiStack_60[0xe] = 3;
  aiStack_60[0xb] = 5;
  aiStack_60[0xd] = 6;
  aiStack_60[0xf] = 7;
  aiStack_60[0x10] = 4;
  aiStack_60[0x11] = 5;
  aiStack_60[0x12] = 5;
  aiStack_60[0x13] = 6;
  aiStack_60[0x14] = 6;
  aiStack_60[0x15] = 7;
  aiStack_60[0x16] = 7;
  aiStack_60[0x17] = 4;
  do {
    iVar1 = aiStack_60[iVar3 * 2 + 1];
    iVar2 = aiStack_60[iVar3 * 2];
    CDrawPort::DrawLine3D
              (DAT_362fe0d0,afStack_c0[iVar2 * 3],afStack_c0[iVar2 * 3 + 1],
               afStack_c0[iVar2 * 3 + 2],afStack_c0[iVar1 * 3],afStack_c0[iVar1 * 3 + 1],
               afStack_c0[iVar1 * 3 + 2],unaff_EBX);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  return;
}

