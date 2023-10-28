// Copyright Damage Studios 2023

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HighlightHover.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHighlightHover : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IHighlightHover
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// Pure virtual function makes the class an abstract class.
	// These functions can only be accessed with override from other classes
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;
};
