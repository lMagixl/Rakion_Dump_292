
void FUN_3611d6c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_36121e20(&DAT_362fca8c);
  DAT_362fcaa0 = 0;
  FUN_36121f00(&DAT_362fcaa8);
  DAT_362fcabc = 0;
  FUN_36121fa0(&DAT_362fcac4);
  DAT_362fcad8 = 0;
  iVar1 = FUN_3600bef0(&DAT_362fcae0);
  if (iVar1 != 0) {
    operator_delete__(DAT_362fcae4);
    DAT_362fcae0 = 0;
    DAT_362fcae4 = (void *)0x0;
    DAT_362fcae8 = 0;
  }
  iVar1 = FUN_3600bef0(&DAT_362fcaf0);
  if (iVar1 != 0) {
    operator_delete__(DAT_362fcaf4);
    DAT_362fcaf0 = 0;
    DAT_362fcaf4 = (void *)0x0;
    DAT_362fcaf8 = 0;
  }
  iVar1 = FUN_3600bef0(&DAT_362fcb00);
  if (iVar1 != 0) {
    operator_delete__(DAT_362fcb04);
    DAT_362fcb00 = 0;
    DAT_362fcb04 = (void *)0x0;
    DAT_362fcb08 = 0;
  }
  if (DAT_362fcb10 != 0) {
    operator_delete__(DAT_362fcb14);
    DAT_362fcb10 = 0;
    DAT_362fcb14 = (void *)0x0;
  }
  if (DAT_362fcb18 != 0) {
    operator_delete__(DAT_362fcb1c);
    DAT_362fcb18 = 0;
    DAT_362fcb1c = (void *)0x0;
  }
  if (DAT_362fcb20 != 0) {
    operator_delete__(DAT_362fcb24);
    DAT_362fcb20 = 0;
    DAT_362fcb24 = (void *)0x0;
  }
  FUN_36122150((undefined4 *)&DAT_362fcb48);
  DAT_362fcb5c = 0;
  iVar1 = FUN_3611fa00(&DAT_362fcb38);
  if (iVar1 != 0) {
    FreeMemoryAligned(DAT_362fcb3c);
    DAT_362fcb38 = 0;
    DAT_362fcb3c = (void *)0x0;
    DAT_362fcb40 = 0;
  }
  iVar1 = FUN_3611fa00(&DAT_362fcb28);
  if (iVar1 != 0) {
    FreeMemoryAligned(DAT_362fcb2c);
    DAT_362fcb28 = 0;
    DAT_362fcb2c = (void *)0x0;
    DAT_362fcb30 = 0;
  }
  puVar2 = &DAT_362fb898;
  do {
    FUN_36121ff0(puVar2 + -0x13);
    puVar2[-0xe] = 0;
    FUN_361220b0(puVar2 + -0xc);
    puVar2[-7] = 0;
    FUN_360ccbb0(puVar2 + -5);
    iVar1 = FUN_3611f8c0(puVar2 + -1);
    if (iVar1 != 0) {
      operator_delete__((void *)*puVar2);
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    FUN_36123250(puVar2 + 3);
    puVar2[8] = 0;
    iVar1 = FUN_3611f940(puVar2 + 10);
    if (iVar1 != 0) {
      operator_delete__((void *)puVar2[0xb]);
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
    }
    iVar1 = FUN_3600bef0(puVar2 + 0xe);
    if (iVar1 != 0) {
      operator_delete__((void *)puVar2[0xf]);
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
    }
    puVar2 = puVar2 + 0x3f8;
  } while ((int)puVar2 < 0x362fd858);
  CPrintF(s_Renderer_buffers_cleared__36237a30);
  return;
}

