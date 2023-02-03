        while(cursor->next != NULL)
        {
            ListNode* current{head};
            while(current != cursor && current->next != nullptr)
            {
                if(cursor->next == current)
                {
                    flag = true;
                    break;
                }
                current = current->next;
            }
            if(flag)
            {
                break;
            }
            cursor = cursor->next;
        }
