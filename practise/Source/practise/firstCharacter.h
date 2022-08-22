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

	UPROPERTY(VisibleAnywhere)//让这个组件的变量可见，不然看不到他的各种属性
	UCameraComponent* Cameracomp;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* ArmComp;//弹簧臂的作用，使摄像机不会穿墙

	void Moveforward(float value);//传入一个参数从-1到1变化，-1代表向后移动，1代表向前移动
	void Moveright(float value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
