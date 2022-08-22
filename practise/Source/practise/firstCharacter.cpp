// Fill out your copyright notice in the Description page of Project Settings.


#include "firstCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AfirstCharacter::AfirstCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	ArmComp = CreateDefaultSubobject<USpringArmComponent>("Armcomp");//传入参数为函数的名字
	//函数生成模板类型的子类
	ArmComp->SetupAttachment(RootComponent);//RootComponent位置相当于胶囊体中心
	Cameracomp = CreateDefaultSubobject<UCameraComponent>("Cameracomp");
	Cameracomp->SetupAttachment(ArmComp);

}

// Called when the game starts or when spawned
void AfirstCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AfirstCharacter::Moveforward(float value)
{
	AddMovementInput(GetActorForwardVector()/*返回指向现在面对的方向的向量 */, value);
}

void AfirstCharacter::Moveright(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}

// Called every frame
void AfirstCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AfirstCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Moveforward",this,&AfirstCharacter::Moveforward);//然后在UE项目设置->Input 中添加Axis映射，名字与Moveforward同名,不区分大小写
	PlayerInputComponent->BindAxis("Moveright", this, &AfirstCharacter::Moveright);

	PlayerInputComponent->BindAxis("Turn",this,&APawn::AddControllerYawInput);//Yaw为水平旋转，pitch为垂直旋转

	PlayerInputComponent->BindAxis("TurnPitch", this, &APawn::AddControllerPitchInput);
}

