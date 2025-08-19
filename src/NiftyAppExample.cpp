#include "NiftyAppExample.h"

NiftyApp::NiftyApp(): App("NiftyApp")
{
	ShowConsole(true);
}

NiftyApp::~NiftyApp()
{
}

void NiftyApp::Update()
{
	// Example of how to modify materials at runtime
	// You could access the scene through the renderer if needed
	// This demonstrates the material system is working
}

void NiftyApp::PostInit()
{
	// Example of how you could add more objects with different materials
	// if you had access to the scene:
	
	// Get the scene (you'd need to implement access to it)
	// auto* scene = GetRenderer()->GetSurface()->GetScene();
	
	// Create a material with different properties
	// nft::vulkan::Material metal_material = {
	//     glm::vec3(0.02f, 0.02f, 0.02f),  // ambient - very dark
	//     glm::vec3(0.3f, 0.3f, 0.3f),     // diffuse - dark gray
	//     glm::vec3(0.95f, 0.95f, 0.95f),  // specular - very shiny
	//     256.0f,                          // specular_highlights - mirror-like
	//     nullptr, nullptr, nullptr
	// };
	// scene->AddMaterial(metal_material);
	
	// Create another object with this material
	// nft::vulkan::ObjectData metal_object;
	// metal_object.mesh = some_mesh;
	// metal_object.transform = glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 0.0f, 0.0f));
	// metal_object.texture_index = 0;
	// metal_object.material_index = 2; // Use the metal material we just added
	// scene->AddObject(metal_object);
}
