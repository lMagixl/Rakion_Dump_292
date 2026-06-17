
/* void __cdecl TR_ExtractPolygonsInBox(class CTerrain const *,class AABBox<float,3> const &,float
   const (&)[12],class Vector<float,3> * *,long &,unsigned short * *,long &) */

void __cdecl
TR_ExtractPolygonsInBox
          (CTerrain *param_1,AABBox<float,3> *param_2,float *param_3,Vector<float,3> **param_4,
          long *param_5,ushort **param_6,long *param_7)

{
  CTRect local_40 [16];
  float local_30 [12];
  
                    /* 0x17c000  3755
                       ?TR_ExtractPolygonsInBox@@YAXPBVCTerrain@@ABV?$AABBox@M$02@@AAY0M@$$CBMPAPAV?$Vector@M$02@@AAJPAPAG4@Z
                        */
  FUN_3608d7d0(local_30,param_3);
  FUN_36183570((undefined4 *)local_40,*(int *)(param_1 + 0x2c),(float *)param_2,local_30);
  TR_ExtractPoligonsInRect(param_1,local_40,param_4,param_5,param_6,param_7);
  return;
}

