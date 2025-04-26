// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/AgentStatus.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/agent_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `agent_id`
// Member `target_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_distances`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_msgs__msg__AgentStatus__init(custom_msgs__msg__AgentStatus * msg)
{
  if (!msg) {
    return false;
  }
  // agent_id
  if (!rosidl_runtime_c__String__init(&msg->agent_id)) {
    custom_msgs__msg__AgentStatus__fini(msg);
    return false;
  }
  // target_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->target_ids, 0)) {
    custom_msgs__msg__AgentStatus__fini(msg);
    return false;
  }
  // target_distances
  if (!rosidl_runtime_c__float__Sequence__init(&msg->target_distances, 0)) {
    custom_msgs__msg__AgentStatus__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__AgentStatus__fini(custom_msgs__msg__AgentStatus * msg)
{
  if (!msg) {
    return;
  }
  // agent_id
  rosidl_runtime_c__String__fini(&msg->agent_id);
  // target_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->target_ids);
  // target_distances
  rosidl_runtime_c__float__Sequence__fini(&msg->target_distances);
}

bool
custom_msgs__msg__AgentStatus__are_equal(const custom_msgs__msg__AgentStatus * lhs, const custom_msgs__msg__AgentStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // agent_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->agent_id), &(rhs->agent_id)))
  {
    return false;
  }
  // target_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->target_ids), &(rhs->target_ids)))
  {
    return false;
  }
  // target_distances
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->target_distances), &(rhs->target_distances)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__AgentStatus__copy(
  const custom_msgs__msg__AgentStatus * input,
  custom_msgs__msg__AgentStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // agent_id
  if (!rosidl_runtime_c__String__copy(
      &(input->agent_id), &(output->agent_id)))
  {
    return false;
  }
  // target_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->target_ids), &(output->target_ids)))
  {
    return false;
  }
  // target_distances
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->target_distances), &(output->target_distances)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__AgentStatus *
custom_msgs__msg__AgentStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__AgentStatus * msg = (custom_msgs__msg__AgentStatus *)allocator.allocate(sizeof(custom_msgs__msg__AgentStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__AgentStatus));
  bool success = custom_msgs__msg__AgentStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__AgentStatus__destroy(custom_msgs__msg__AgentStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__AgentStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__AgentStatus__Sequence__init(custom_msgs__msg__AgentStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__AgentStatus * data = NULL;

  if (size) {
    data = (custom_msgs__msg__AgentStatus *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__AgentStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__AgentStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__AgentStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msgs__msg__AgentStatus__Sequence__fini(custom_msgs__msg__AgentStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__AgentStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msgs__msg__AgentStatus__Sequence *
custom_msgs__msg__AgentStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__AgentStatus__Sequence * array = (custom_msgs__msg__AgentStatus__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__AgentStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__AgentStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__AgentStatus__Sequence__destroy(custom_msgs__msg__AgentStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__AgentStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__AgentStatus__Sequence__are_equal(const custom_msgs__msg__AgentStatus__Sequence * lhs, const custom_msgs__msg__AgentStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__AgentStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__AgentStatus__Sequence__copy(
  const custom_msgs__msg__AgentStatus__Sequence * input,
  custom_msgs__msg__AgentStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__AgentStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__AgentStatus * data =
      (custom_msgs__msg__AgentStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__AgentStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__AgentStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__AgentStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
