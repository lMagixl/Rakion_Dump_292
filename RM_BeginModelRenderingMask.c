
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_BeginModelRenderingMask(class CAnyProjection3D &,unsigned char *,long,long) */

void __cdecl
RM_BeginModelRenderingMask(CAnyProjection3D *param_1,uchar *param_2,long param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  
                    /* 0x1655c0  2905  ?RM_BeginModelRenderingMask@@YAXAAVCAnyProjection3D@@PAEJJ@Z
                        */
  DAT_362fe1b0 = 2;
  CAnyProjection3D::operator=((CAnyProjection3D *)&DAT_362fe2e8,param_1);
  puVar4 = DAT_362fe940;
  DAT_362ca52c = param_4;
  DAT_362ca524 = param_2;
  DAT_362ca528 = param_3;
  DAT_362fe940[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  (**(code **)*DAT_362fe940)();
  fVar1 = -(float)DAT_362fe940[0x10];
  fVar2 = -(float)DAT_362fe940[0x11];
  fVar3 = -(float)DAT_362fe940[0x12];
  _DAT_362fe0e8 = DAT_362fe940[0x3e];
  _DAT_362fe0ec = DAT_362fe940[0x3f];
  _DAT_362fe0f4 =
       fVar1 * (float)DAT_362fe940[0x3e] +
       fVar3 * (float)DAT_362fe940[0x40] + fVar2 * (float)DAT_362fe940[0x3f];
  _DAT_362fe0f0 = DAT_362fe940[0x40];
  _DAT_362fe0f8 = DAT_362fe940[0x41];
  _DAT_362fe0fc = DAT_362fe940[0x42];
  _DAT_362fe100 = DAT_362fe940[0x43];
  _DAT_362fe104 =
       fVar3 * (float)DAT_362fe940[0x43] +
       fVar2 * (float)DAT_362fe940[0x42] + fVar1 * (float)DAT_362fe940[0x41];
  _DAT_362fe108 = DAT_362fe940[0x44];
  _DAT_362fe10c = DAT_362fe940[0x45];
  _DAT_362fe110 = DAT_362fe940[0x46];
  _DAT_362fe114 =
       fVar3 * (float)DAT_362fe940[0x46] +
       fVar2 * (float)DAT_362fe940[0x45] + fVar1 * (float)DAT_362fe940[0x44];
  _DAT_362fe95c = &LAB_3616f8c0;
  _DAT_362fe960 = &LAB_361704a0;
  return;
}

