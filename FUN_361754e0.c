
void __cdecl FUN_361754e0(CTextureData *param_1,long param_2,long param_3)

{
  MakeMipmaps(*(ulong **)(param_1 + 0x60),param_2,param_3,0);
  CTextureData::SetAsCurrent(param_1,0,1);
  return;
}

