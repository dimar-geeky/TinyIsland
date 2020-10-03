// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonFunctionLibrary.h"

bool UCommonFunctionLibrary::IsWithEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}
