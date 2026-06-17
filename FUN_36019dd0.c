
void __thiscall FUN_36019dd0(void *this,_String_base *param_1)

{
  uint unaff_EDI;
  
  if (*(uint *)((int)this + 4) != 0) {
    if ((*(uint *)this <= *(uint *)(param_1 + 0x8c)) &&
       (*(uint *)(param_1 + 0x8c) - *(uint *)this < *(uint *)((int)this + 4))) {
      FUN_36016fb0((void *)((int)this + 8),param_1,0,0xffffffff,unaff_EDI);
      *(int *)((int)this + 4) = *(int *)(param_1 + 0x8c) - *(int *)this;
    }
  }
  return;
}

