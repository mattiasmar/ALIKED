#include <torch/torch.h>

torch::Tensor get_patches_forward_cuda(const torch::Tensor &input, torch::Tensor &points, int64_t kernel_size)
{
    throw std::runtime_error("get_patches_forward_cuda is not implemented.");
}

torch::Tensor get_patches_forward_cuda1(const torch::Tensor &map, torch::Tensor &points, int64_t kernel_size)
{
    throw std::runtime_error("get_patches_forward_cuda1 is not implemented.");
}

torch::Tensor get_patches_backward_cuda(const torch::Tensor &d_patches, torch::Tensor &points, int64_t H, int64_t W)
{
    throw std::runtime_error("get_patches_backward_cuda is not implemented.");
}
