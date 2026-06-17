
/* unsigned long __cdecl PackAngle(class Vector<float,3> const &) */

ulong __cdecl PackAngle(Vector<float,3> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
                    /* 0xfe630  2730  ?PackAngle@@YAKABV?$Vector@M$02@@@Z */
  _CIfmod();
  _CIfmod();
  uVar1 = FUN_361bfd6c();
  _CIfmod();
  _CIfmod();
  uVar2 = FUN_361bfd6c();
  _CIfmod();
  _CIfmod();
  uVar3 = FUN_361bfd6c();
  return (uint)uVar3 & 0x7ff | ((ushort)uVar1 & 0x3ff | (int)(short)uVar2 << 10) << 0xb;
}

