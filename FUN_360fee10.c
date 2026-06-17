
undefined4 __thiscall FUN_360fee10(void *this,uint *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 local_8 [2];
  
  piVar2 = *(int **)((int)this + 8);
  do {
    if ((int *)*piVar2 == (int *)0x0) {
      CListHead::AddTail((CListHead *)((int)this + 8),(CListNode *)(param_1 + 0x105));
LAB_360fee9c:
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      if ((param_1[1] & 2) != 0) {
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      }
      *(uint *)this = *(int *)this + (param_1[2] - 0xc);
      return 1;
    }
    puVar1 = (uint *)(piVar2 + -0x105);
    if (*param_1 < *puVar1) {
      if (param_2 == 0) {
        puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      }
      else {
        puVar1 = (uint *)FUN_360fed70(this,local_8);
      }
      param_1[6] = *puVar1;
      param_1[7] = puVar1[1];
      puVar1 = param_1 + 0x105;
      *(uint **)piVar2[1] = puVar1;
      param_1[0x106] = piVar2[1];
      *puVar1 = (uint)piVar2;
      piVar2[1] = (int)puVar1;
      goto LAB_360fee9c;
    }
    piVar2 = (int *)*piVar2;
    if (*param_1 == *puVar1) {
      return 0;
    }
  } while( true );
}

