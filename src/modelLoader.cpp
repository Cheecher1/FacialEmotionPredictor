#include "ModelLoader.h"

ModelLoader::ModelLoader()
{
    // The constructor is a good place to initialize the face detector,
    // as dlib's get_frontal_face_detector function does not require a model path
    this->face_detector = get_frontal_face_detector();
}

void ModelLoader::load_face_detector_model(const std::string& model_path)
{
    // dlib's frontal_face_detector does not require loading from a file
    // If you have a custom face detection model, load it here
}

void ModelLoader::load_shape_predictor_model(const std::string& model_path)
{
    // Load shape predictor model
    deserialize(model_path) >> this->shape_predictor;
}

void ModelLoader::load_emotion_classifier_model(const std::string& model_path)
{
    // Load emotion classification model
    // Assuming you have an emotion_classifier member of appropriate type:
    // deserialize(model_path) >> this->emotion_classifier;
}

frontal_face_detector& ModelLoader::get_face_detector()
{
    return this->face_detector;
}

shape_predictor& ModelLoader::get_shape_predictor()
{
    return this->shape_predictor;
}

// Add a getter for the emotion classifier if you have one
