
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361cd8de(void *this,float param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  char *pcStack_14;
  uint uStack_10;
  uint uStack_c;
  float fStack_8;
  
  switch(param_1) {
  case 5.60519e-45:
    FUN_361dbc0b((void *)((int)this + 0x24),&uStack_10);
    FUN_361dbc0b((void *)((int)this + 0x24),&param_1);
    if ((((uint)param_1 | uStack_10) & 0xffffff00) == 0) {
      *(undefined4 *)((int)this + 0xac) = 0;
      uVar2 = (uint)param_1 | 0xfffffe00;
code_r0x361cd94d:
      *(uint *)((int)this + 0xb4) = uVar2 << 8 | uStack_10;
      goto code_r0x361cd959;
    }
    goto code_r0x361cd92f;
  case 7.00649e-45:
    FUN_361dbc0b((void *)((int)this + 0x24),&uStack_10);
    FUN_361dbc0b((void *)((int)this + 0x24),&param_1);
    if ((((uint)param_1 | uStack_10) & 0xffffff00) == 0) {
      *(undefined4 *)((int)this + 0xac) = 1;
      uVar2 = (uint)param_1 | 0xffffff00;
      goto code_r0x361cd94d;
    }
code_r0x361cd92f:
    pcVar5 = s_invalid_version_36249974;
code_r0x361cd934:
    FUN_361cc398((int)this,pcVar5);
    break;
  case 8.40779e-45:
  case 9.80909e-45:
  case 1.12104e-44:
  case 1.26117e-44:
  case 1.54143e-44:
  case 1.68156e-44:
  case 6.30584e-44:
  case 6.44597e-44:
    break;
  case 1.4013e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    pvVar4 = (void *)((int)this + 0x34);
    FUN_361dbc0b(pvVar4,&uStack_28);
    FUN_361dbc0b(pvVar4,&uStack_2c);
    FUN_361dbc0b(pvVar4,&uStack_30);
    FUN_361dbc0b(pvVar4,&uStack_34);
    func_0x361cd0d0(param_1,&uStack_34);
    break;
  case 1.82169e-44:
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_1c);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_c);
    FUN_361dbb9d((void *)((int)this + 0x74),uStack_c);
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 4;
    break;
  case 1.96182e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_1c);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_c);
    FUN_361dbb9d((void *)((int)this + 0x74),uStack_c);
    FUN_361dbb9d((void *)((int)this + 0x74),uStack_1c | (uint)param_1);
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 8;
    break;
  case 2.10195e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&uStack_10);
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_1c);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_c);
    pvVar4 = (void *)((int)this + 0x74);
    FUN_361dbb9d(pvVar4,uStack_c);
    FUN_361dbb9d(pvVar4,uStack_1c | (uint)param_1);
    FUN_361dbb9d(pvVar4,uStack_10);
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 0xc;
    break;
  case 2.24208e-44:
    pvVar4 = (void *)((int)this + 0x44);
    FUN_361dbc0b(pvVar4,&uStack_20);
    FUN_361dbc0b(pvVar4,&uStack_10);
    FUN_361dbc0b(pvVar4,&param_1);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_1c);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_c);
    if ((*(int *)((int)this + 0xac) == 0) && ((uStack_c & 0xffff) == 3)) {
      uStack_c = uStack_c & 0xffff0002 | 2;
      uStack_20 = uStack_20 ^ 0x1000000;
    }
    pvVar4 = (void *)((int)this + 0x74);
    FUN_361dbb9d(pvVar4,uStack_c);
    FUN_361dbb9d(pvVar4,uStack_1c | (uint)param_1);
    FUN_361dbb9d(pvVar4,uStack_10);
    FUN_361dbb9d(pvVar4,uStack_20);
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 0x10;
    break;
  case 2.38221e-44:
    pvVar4 = (void *)((int)this + 0x44);
    FUN_361dbc0b(pvVar4,&uStack_24);
    FUN_361dbc0b(pvVar4,&uStack_20);
    FUN_361dbc0b(pvVar4,&uStack_10);
    FUN_361dbc0b(pvVar4,&param_1);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_1c);
    FUN_361dbc0b((void *)((int)this + 0x54),&uStack_c);
    pvVar4 = (void *)((int)this + 0x74);
    FUN_361dbb9d(pvVar4,uStack_c);
    FUN_361dbb9d(pvVar4,uStack_1c | (uint)param_1);
    FUN_361dbb9d(pvVar4,uStack_10);
    FUN_361dbb9d(pvVar4,uStack_20);
    FUN_361dbb9d(pvVar4,uStack_24);
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 0x14;
    break;
  case 2.52234e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    param_1 = (float)((uint)param_1 | 0xf0000);
    fStack_8 = param_1;
    goto code_r0x361cdf35;
  case 2.66247e-44:
    func_0x361dbd3e(&pcStack_14);
    FUN_361dbc0b((void *)((int)this + 0x14),(undefined4 *)((int)this + 0x3e4));
    *(undefined4 *)((int)this + 0x3e0) = 1;
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    uVar2 = FUN_361ccbe5(this,pcStack_14);
    fVar1 = (float)(uVar2 | (uint)param_1 & 0xfff0ffff);
    param_1 = fVar1;
    goto code_r0x361cdc63;
  case 2.8026e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    FUN_361dbb9d((void *)((int)this + 0x44),param_1);
    if (((*(int *)((int)this + 0xb4) != -0xfefc) || (((uint)param_1 & 0x70000000) != 0x20000000)) ||
       (((uint)param_1 & 0xf000000) == 0)) break;
    pcVar5 = s_constant_modifiers_not_supported_36249948;
    goto code_r0x361cd934;
  case 2.94273e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    if ((*(int *)((int)this + 0xb4) == -0xfefc) && (((uint)param_1 & 0x70000000) == 0x20000000)) {
      pcVar5 = s_constant_modifiers_not_supported_36249948;
code_r0x361cdcff:
      FUN_361cc398((int)this,pcVar5);
      fStack_8 = param_1;
    }
    else {
      uVar2 = (uint)param_1 & 0xf000000;
      if (uVar2 == 0) {
        param_1 = (float)((uint)param_1 & 0xf1ffffff | 0x1000000);
        fStack_8 = param_1;
      }
      else if (uVar2 == 0x2000000) {
        param_1 = (float)((uint)param_1 & 0xf3ffffff | 0x3000000);
        fStack_8 = param_1;
      }
      else if (uVar2 == 0x4000000) {
        param_1 = (float)((uint)param_1 & 0xf5ffffff | 0x5000000);
        fStack_8 = param_1;
      }
      else if (uVar2 == 0x7000000) {
        param_1 = (float)((uint)param_1 & 0xf8ffffff | 0x8000000);
        fStack_8 = param_1;
      }
      else if ((uVar2 == 0x9000000) || (fStack_8 = param_1, uVar2 == 0xa000000)) {
        pcVar5 = s_negate_and_divide_modifiers_cann_36249918;
        goto code_r0x361cdcff;
      }
    }
    goto code_r0x361cdf35;
  case 3.08286e-44:
    FUN_361dbc0b((void *)((int)this + 0x24),&fStack_8);
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    if (*(int *)((int)this + 0xac) == 0) {
      pcVar5 = s_complement_not_supported_in_vert_362498ec;
code_r0x361cddd8:
      FUN_361cc398((int)this,pcVar5);
    }
    else {
      if ((*(int *)((int)this + 0xb4) == -0xfefc) && (((uint)param_1 & 0x70000000) == 0x20000000)) {
        pcVar5 = s_constant_modifiers_not_supported_36249948;
        goto code_r0x361cddd8;
      }
      if (((uint)param_1 & 0xf000000) != 0) {
        pcVar5 = s_complement_cannot_be_used_with_o_362498bc;
        goto code_r0x361cddd8;
      }
    }
    param_1 = (float)((uint)param_1 & 0xf6ffffff | 0x6000000);
    fStack_8 = param_1;
    goto code_r0x361cdf35;
  case 3.22299e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    fStack_8 = (float)((uint)param_1 & 0xffe4ffff | 0xe40000);
    goto code_r0x361cdf35;
  case 3.36312e-44:
    func_0x361dbd3e(&pcStack_14);
    FUN_361dbc0b((void *)((int)this + 0x14),(undefined4 *)((int)this + 0x3e4));
    *(undefined4 *)((int)this + 0x3e0) = 1;
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    uVar2 = FUN_361ccc8e(this,pcStack_14);
    fVar1 = (float)(uVar2 | (uint)param_1 & 0xff00ffff);
    goto code_r0x361cdc63;
  case 3.50325e-44:
    func_0x361dbd3e(&pcStack_14);
    FUN_361dbc0b((void *)((int)this + 0x14),(undefined4 *)((int)this + 0x3e4));
    *(undefined4 *)((int)this + 0x3e0) = 1;
    uVar2 = FUN_361ccd2f(this,pcStack_14,0,0);
    FUN_361dbb9d((void *)((int)this + 0x44),uVar2 | 0x80000000);
    operator_delete(pcStack_14);
    *(undefined4 *)((int)this + 0x3e0) = 0;
    break;
  case 3.64338e-44:
    func_0x361dbd3e(&pcStack_14);
    FUN_361dbc0b((void *)((int)this + 0x14),(undefined4 *)((int)this + 0x3e4));
    *(undefined4 *)((int)this + 0x3e0) = 1;
    FUN_361dbc0b((void *)((int)this + 0x44),&fStack_8);
    uVar2 = FUN_361ccd2f(this,pcStack_14,(uint)fStack_8,1);
    fVar1 = (float)(uVar2 | 0x80000000);
code_r0x361cdc63:
    FUN_361dbb9d((void *)((int)this + 0x44),fVar1);
    operator_delete(pcStack_14);
    *(undefined4 *)((int)this + 0x3e0) = 0;
    break;
  case 3.78351e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&fStack_8);
    if (*(int *)((int)this + 0xac) == 0) {
      if (fStack_8 != -4.656613e-10) {
        pcVar5 = s_illegal_register_in_index_expres_36249894;
        goto code_r0x361cdf28;
      }
    }
    else {
      pcVar5 = s_syntax_error_36249504;
code_r0x361cdf28:
      FUN_361cc398((int)this,pcVar5);
    }
    fStack_8 = 1.14794e-41;
code_r0x361cdf35:
    pvVar4 = (void *)((int)this + 0x44);
    goto code_r0x361ce104;
  case 3.92364e-44:
    FUN_361dbc0b((void *)((int)this + 0x24),&fStack_8);
    if (((uint)fStack_8 & 0xffffe000) != 0) {
      FUN_361cc398((int)this,s_illegal_register_number_3624987c);
    }
    pvVar4 = (void *)((int)this + 0x44);
    goto code_r0x361ce104;
  case 4.06377e-44:
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    FUN_361dbc0b((void *)((int)this + 0x44),&fStack_8);
    if (*(int *)((int)this + 0xac) == 0) {
      if (fStack_8 != -4.656613e-10) {
        pcVar5 = s_illegal_register_in_index_expres_36249894;
        goto code_r0x361cdfb1;
      }
      if (((uint)param_1 & 0x2000) != 0) {
        pcVar5 = s_a0_x_can_only_appear_once_in_an_i_36249848;
        goto code_r0x361cdfb1;
      }
    }
    else {
      pcVar5 = s_syntax_error_36249504;
code_r0x361cdfb1:
      FUN_361cc398((int)this,pcVar5);
    }
    fStack_8 = (float)((uint)param_1 | 0x2000);
    goto code_r0x361ce00b;
  case 4.2039e-44:
    FUN_361dbc0b((void *)((int)this + 0x24),&fStack_8);
    FUN_361dbc0b((void *)((int)this + 0x44),&param_1);
    if ((((uint)param_1 & 0x1fff) + (int)fStack_8 & 0xffffe000) != 0) {
      FUN_361cc398((int)this,s_illegal_register_number_3624987c);
    }
    fStack_8 = (float)(((int)fStack_8 + (int)param_1 ^ (uint)param_1) & 0x1fff ^ (uint)param_1);
code_r0x361ce00b:
    pvVar4 = (void *)((int)this + 0x44);
    goto code_r0x361ce104;
  case 4.34403e-44:
code_r0x361cd959:
    *(undefined4 *)((int)this + 0x3dc) = *(undefined4 *)((int)this + 0x1d0);
    break;
  case 4.48416e-44:
  case 4.76441e-44:
  case 5.04467e-44:
  case 5.32493e-44:
  case 5.60519e-44:
    uVar2 = *(uint *)((int)this + 0x1c8);
    goto code_r0x361ce018;
  case 4.62428e-44:
  case 4.90454e-44:
  case 5.1848e-44:
  case 5.46506e-44:
  case 5.74532e-44:
    if (*(int *)((int)this + 0xac) == 0) {
      FUN_361cc398((int)this,s_coissue_not_supported_in_vertex_s_36249820);
    }
    uVar2 = *(uint *)((int)this + 0x1c8) | 0x40000000;
code_r0x361ce018:
    FUN_361dbb9d((void *)((int)this + 0x54),uVar2);
    FUN_361dbb9d((void *)((int)this + 0x54),*(undefined4 *)((int)this + 0x1cc));
    FUN_361cd24f(this);
    break;
  case 5.88545e-44:
  case 6.02558e-44:
    FUN_361dbc0b((void *)((int)this + 0x24),&fStack_8);
    fStack_18 = (float)(int)fStack_8;
    if ((int)fStack_8 < 0) {
      fStack_18 = fStack_18 + _DAT_362265a8;
    }
    goto code_r0x361ce101;
  case 6.16571e-44:
    FUN_361dbc0b((void *)((int)this + 0x24),&fStack_8);
    fStack_18 = (float)(int)fStack_8;
    if ((int)fStack_8 < 0) {
      fStack_18 = fStack_18 + _DAT_362265a8;
    }
    fStack_18 = -fStack_18;
    goto code_r0x361ce101;
  case 6.5861e-44:
    FUN_361dbc0b((void *)((int)this + 0x34),&fStack_18);
    fStack_18 = -fStack_18;
    goto code_r0x361ce101;
  case 6.72623e-44:
    FUN_361dbc8b(this,(char *)((int)this + 200));
    fStack_8 = *(float *)((int)this + 0x1d0);
    pvVar4 = (void *)((int)this + 0x14);
    goto code_r0x361ce104;
  case 6.86636e-44:
    fStack_8 = (float)atoi((char *)((int)this + 200));
    pvVar4 = (void *)((int)this + 0x24);
    goto code_r0x361ce104;
  case 7.00649e-44:
    func_0x361c00be((int)this + 200,0x3624981c,&fStack_18);
code_r0x361ce101:
    pvVar4 = (void *)((int)this + 0x34);
    fStack_8 = fStack_18;
code_r0x361ce104:
    FUN_361dbb9d(pvVar4,fStack_8);
    break;
  default:
    goto LAB_361ce10a;
  }
LAB_361ce10a:
  iVar3 = FUN_361dbd72((int)this);
  if (((iVar3 < 0) || (iVar3 = FUN_361dbc3f((int)this + 0x14), iVar3 < 0)) ||
     ((iVar3 = FUN_361dbc3f((int)this + 0x24), iVar3 < 0 ||
      (((iVar3 = FUN_361dbc3f((int)this + 0x44), iVar3 < 0 ||
        (iVar3 = FUN_361dbc3f((int)this + 0x74), iVar3 < 0)) ||
       (iVar3 = FUN_361dbc3f((int)this + 0x34), iVar3 < 0)))))) {
    FUN_361cc398((int)this,s_Internal_assembler_error___d_362497fc);
  }
  return;
}

