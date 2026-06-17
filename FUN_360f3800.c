
void FUN_360f3800(void)

{
  CStock_CEntityClass::FreeUnused(_pEntityClassStock);
  CStock_CModelData::FreeUnused(_pModelStock);
  CStock_CSoundData::FreeUnused(_pSoundStock);
  CStock_CFontData::FreeUnused(_pFontStock);
  CStock_CModelInstance::FreeUnused(_pModelInstanceStock);
  CStock_CTextureData::FreeUnused(_pTextureStock);
  CStock_CAnimData::FreeUnused(_pAnimStock);
  CStock_CMesh::FreeUnused(_pMeshStock);
  CStock_CSkeleton::FreeUnused(_pSkeletonStock);
  CStock_CAnimSet::FreeUnused(_pAnimSetStock);
  CStock_CShader::FreeUnused(_pShaderStock);
  return;
}

