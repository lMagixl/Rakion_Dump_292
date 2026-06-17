
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_SetTextureSection(long,long,long,long) */

void __cdecl Particle_SetTextureSection(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  
                    /* 0x6b8d0  2757  ?Particle_SetTextureSection@@YAXJJJJ@Z */
  bVar1 = (byte)*(undefined4 *)(DAT_362bf9e8 + 0x28);
  DAT_362bf98c = (float)(param_1 << (bVar1 & 0x1f)) * _DAT_362bf9b4;
  DAT_362bf990 = (float)(param_2 << (bVar1 & 0x1f)) * _DAT_362bf9b0;
  DAT_362bf994 = DAT_362bf98c;
  DAT_362bf998 = (float)(param_4 << (bVar1 & 0x1f)) * _DAT_362bf9b0;
  DAT_362bf99c = (float)(param_3 << (bVar1 & 0x1f)) * _DAT_362bf9b4;
  DAT_362bf9a0 = DAT_362bf998;
  DAT_362bf9a4 = DAT_362bf99c;
  DAT_362bf9a8 = DAT_362bf990;
  return;
}

