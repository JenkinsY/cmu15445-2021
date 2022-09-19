#include "optimizer/optimizer.h"
#include "execution/plans/abstract_plan.h"

namespace bustub {

auto Optimizer::Optimize(AbstractPlanNodeRef plan) -> AbstractPlanNodeRef {
  return OptimizeMergeProjection(std::move(plan));
}

}  // namespace bustub
