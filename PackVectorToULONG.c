
/* unsigned long __cdecl PackVectorToULONG(class Vector<float,3> &) */

ulong __cdecl PackVectorToULONG(Vector<float,3> *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
                    /* 0xfe4a0  2736  ?PackVectorToULONG@@YAKAAV?$Vector@M$02@@@Z */
  uVar1 = PackFloat('\x04','\x05','\x01',*(float *)(param_1 + 4));
  uVar2 = PackFloat('\x04','\x06','\x01',*(float *)param_1);
  uVar3 = PackFloat('\x04','\x06','\x01',*(float *)(param_1 + 8));
  return uVar3 & 0x7ff | (uVar1 & 0x3ff | uVar2 << 10) << 0xb;
}

