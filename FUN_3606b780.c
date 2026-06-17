
/* WARNING: Removing unreachable block (ram,0x3606b79b) */
/* WARNING: Removing unreachable block (ram,0x3606b7a0) */
/* WARNING: Removing unreachable block (ram,0x3606b7ae) */

void __thiscall FUN_3606b780(void *this,uint param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)*param_2;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  FUN_3606b4f0(this,*(undefined4 **)((int)this + 4),param_1,&param_2);
  return;
}

