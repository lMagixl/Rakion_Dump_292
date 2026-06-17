
void __cdecl FUN_360f35f0(CTStream *param_1)

{
  CTStream::PutLine_t(param_1,s_Animations__36233a14);
  FUN_360e55a0(_pAnimStock,param_1);
  CTStream::PutLine_t(param_1,s_Textures__36233a20);
  FUN_360f0510(_pTextureStock,param_1);
  CTStream::PutLine_t(param_1,s_Models__36233a2c);
  FUN_360eadd0(_pModelStock,param_1);
  CTStream::PutLine_t(param_1,s_Meshes__36233a34);
  FUN_360e9d10(_pMeshStock,param_1);
  CTStream::PutLine_t(param_1,s_Skeletons__36233a3c);
  FUN_360ee240(_pSkeletonStock,param_1);
  CTStream::PutLine_t(param_1,s_Animsets__36233a48);
  FUN_360e6940(_pAnimSetStock,param_1);
  CTStream::PutLine_t(param_1,s_Shaders__36233a54);
  FUN_360ed0a0(_pShaderStock,param_1);
  CTStream::PutLine_t(param_1,s_ModelInstances__36233a60);
  FUN_360ebee0(_pModelInstanceStock,param_1);
  CTStream::PutLine_t(param_1,s_Sounds__36233a70);
  FUN_360ef400(_pSoundStock,param_1);
  CTStream::PutLine_t(param_1,s_Classes__36233a78);
  FUN_360e7990(_pEntityClassStock,param_1);
  return;
}

