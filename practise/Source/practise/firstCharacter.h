// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "firstCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class PRACTISE_API AfirstCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AfirstCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)//���������ı����ɼ�����Ȼ���������ĸ�������
	UCameraComponent* Cameracomp;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* ArmComp;//���ɱ۵����ã�ʹ��������ᴩǽ

	void Moveforward(float value);//����һ��������-1��1�仯��-1��������ƶ���1������ǰ�ƶ�
	void Moveright(float value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
