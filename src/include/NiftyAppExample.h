#pragma once

#include <core/app.h>
#include <vk/scene.h>

class NiftyApp : public nft::App
{
public:
	NiftyApp();
	~NiftyApp();

private:
	std::unique_ptr<nft::vulkan::Scene> scene;

	virtual void PreInit() override;
	virtual void PostInit() override;
	virtual void BeginFrame() override {};
	virtual void Update() override;
	virtual void EndFrame() override {};
};