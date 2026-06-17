
/* WARNING: Removing unreachable block (ram,0x361a769b) */
/* WARNING: Removing unreachable block (ram,0x361a76a0) */
/* WARNING: Removing unreachable block (ram,0x361a76ae) */

void __thiscall FUN_361a7680(void *this,uint param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)*param_2;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  FUN_361a7270(this,*(undefined4 **)((int)this + 4),param_1,&param_2);
  return;
}

