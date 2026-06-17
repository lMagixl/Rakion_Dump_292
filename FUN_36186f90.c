
/* WARNING: Removing unreachable block (ram,0x36186fab) */
/* WARNING: Removing unreachable block (ram,0x36186fb0) */
/* WARNING: Removing unreachable block (ram,0x36186fbe) */

void __thiscall FUN_36186f90(void *this,uint param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)*param_2;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  FUN_36186a30(this,*(undefined4 **)((int)this + 4),param_1,&param_2);
  return;
}

