
/* void __cdecl BeginModelRenderingMask(class CAnyProjection3D &,unsigned char *,long,long) */

void __cdecl
BeginModelRenderingMask(CAnyProjection3D *param_1,uchar *param_2,long param_3,long param_4)

{
                    /* 0xbc690  1083  ?BeginModelRenderingMask@@YAXAAVCAnyProjection3D@@PAEJJ@Z */
  DAT_362ca520 = 2;
  CAnyProjection3D::operator=((CAnyProjection3D *)&DAT_362ca560,param_1);
  DAT_362ca524 = param_2;
  DAT_362ca528 = param_3;
  DAT_362ca52c = param_4;
  return;
}

