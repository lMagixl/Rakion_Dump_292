
undefined4 * FUN_361d90e7(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *this;
  int iVar4;
  int unaff_EBP;
  
  FUN_3620d000();
  *(undefined4 **)(unaff_EBP + -0x14) = this;
  FUN_361d5d2c(this,*(undefined4 **)(unaff_EBP + 8),0,1);
  uVar1 = this[0x40c];
  uVar2 = this[0x40e] + 1 & 0xfffffffe;
  iVar4 = uVar2 - (uVar1 & 0xfffffffe);
  this[0x41e] = uVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_LAB_36249af0;
  this[0x41c] = uVar1 & 0xfffffffe;
  this[0x41d] = 0;
  this[0x420] = 0;
  this[0x41f] = 0;
  this[0x421] = 0;
  this[0x422] = iVar4;
  this[0x423] = 0;
  this[0x424] = 1;
  iVar3 = FUN_361bf99c(iVar4 * 0x10);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_36006680(iVar3,0x10,iVar4,&LAB_361c12a5);
    iVar3 = *(int *)(unaff_EBP + -0x10);
  }
  this[0x41b] = iVar3;
  if (iVar3 == 0) {
    this[0x424] = 0;
  }
  if (*(int *)(*(int *)(unaff_EBP + 8) + 4) == 0x59565955) {
    this[0x425] = 8;
    this[0x426] = 0;
  }
  else {
    this[0x425] = 0;
    this[0x426] = 8;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}

