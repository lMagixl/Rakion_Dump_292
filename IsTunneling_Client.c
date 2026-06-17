
/* public: int __thiscall IScavengerWorldNet::IsTunneling_Client(unsigned char) */

int __thiscall IScavengerWorldNet::IsTunneling_Client(IScavengerWorldNet *this,uchar param_1)

{
  int iVar1;
  
                    /* 0x19a140  2487  ?IsTunneling_Client@IScavengerWorldNet@@QAEHE@Z */
  iVar1 = (**(code **)(*(int *)this + 8))();
  return (uint)*(byte *)(iVar1 + 0x1d6 + (uint)param_1 * 0x37c);
}

